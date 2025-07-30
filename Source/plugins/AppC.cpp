#include "Module.h"

namespace WPEFramework {
namespace Plugin {

    class AppC : public PluginHost::IPlugin {
    public:
        AppC(const AppC&) = delete;
        AppC& operator=(const AppC&) = delete;

        AppC() = default;
        ~AppC() override = default;

        // IPlugin methods
        const string Initialize(PluginHost::IShell* service) override
        {
            // Redirect requests to the static files
            service->Redirect("/Appc", "/usr/share/WPEFramework/AppC/index.html");
            return string(); // Return empty string on success
        }

        void Deinitialize(PluginHost::IShell* service) override
        {
            // Clean up if necessary
        }

        string Information() const override
        {
            return string("AppC Plugin");
        }
    };

    // Register the plugin
    SERVICE_REGISTRATION(AppC, 1, 0);
}
}