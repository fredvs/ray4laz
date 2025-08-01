// Configuration file for raylib

{$IFDEF LINUX}
  {$IFNDEF RAY_DYNAMIC}
    {$DEFINE RAY_STATIC}
    // for r3d, it is possible to use only a dynamic library.
  {$ENDIF}
{$IFEND}

{$IFDEF WINDOWS}
  {$IFNDEF RAY_DYNAMIC}
    {.$DEFINE RAY_STATIC}
  {$ENDIF}
{$IFEND}

{$IFDEF DARWIN}
  {$IFNDEF RAY_DYNAMIC}
    {$DEFINE RAY_STATIC}
  {$ENDIF}
{$IFEND}

{$IFDEF HAIKU}
  {$IFNDEF RAY_DYNAMIC}
    {.$DEFINE RAY_STATIC}
  {$ENDIF}
{$IFEND}

{$define GRAPHICS_API_OPENGL_33}

{$PACKRECORDS C}
{$ALIGN 8}
{$MINENUMSIZE 4}



