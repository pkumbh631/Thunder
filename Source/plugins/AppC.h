#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Plugin {

    class AppC : public PluginHost::IPlugin {
    public:
        AppC();
        ~AppC() override;

        // IPlugin methods
        const string Initialize(PluginHost::IShell* service) override;
        void Deinitialize(PluginHost::IShell* service) override;
        string Information() const override;
    };

} // namespace Plugin
} // namespace WPEFramework