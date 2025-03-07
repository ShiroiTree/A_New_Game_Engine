



# include "Core/include/Core.h"

#include <string>
#include <functional>


namespace Juice
{

    enum class EventType
    {
        None = 0,
        WindowClose, WindowResize, WindowFocus, WindowLostFocus, WindowMoved,
        AppTick, AppUpdate, AppRender,
        KeyPressed, KeyReleased,
        MouseButtonPressed, MouseButtonReleased, MouseMoved, MouseScorlled
    };

    enum EventCategory
    {
        None = 0,
        EventCategoryApplication    = BIT(1),
        EventCategoryInput          = BIT(2),
        EventCategoryKeyBoard       = BIT(3),
        EventCategoryMouse          = BIT(4),
        EventCategoryMouseButton    = BIT(5)
    };
    
}