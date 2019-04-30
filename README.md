# ANBU
*Automatic New Binary Unpacker with PIN DBI Framework*
This project is considered more an academic project than something professional or company software, I have it as a way for me to learn about how to use PIN and how to implement interesting things with it, so pull request are welcome.

## First of All: Compiling ANBU

To compile ANBU you need to download PIN, and you can download it from here: [Intel PIN][1]. Once you have PIN on your system, you have to copy ANBU folder on <pin_path>/source/tools/ path, also you can create another folder instead of "tools" I created one called "unpackers". Once you have the path <pin_path>/source/tools or unpackers/ANBU, you can open ANBU.sln file with Visual Studio, in my case I use Visual Studio 2017. To compile I do nothing special more than compile the project I compile on "Release" for "x86" (I haven't tested or programmed ANBU for x64 for the moment). And that's all, you'll have ANBU.dll on your release folder.

## Testing ANBU

ANBU doesn't have any special flag to use for the moment so you can run ANBU as any PIN tool:

```shell
pin -t ANBU.dll -- program_to_unpack.exe
```

Also there's a flag to modify output file name with log.

## Unpacked code

ANBU dumps two different things, one of the things ANBU dumps are memory chunks that appears from unpacking process, this is not a PE file it's only a binary file with written and executed code (can be a complete section or only a chunk from unpacking process), after the unpacking process ANBU will try to dump the unpacked PE file with a new section of imports (called ".F9 I don't have a much imagination). For the process a file log is created and updated during the execution.

## Packers tested

I'm not professional on this, but I give some examples to the people who wanna try ANBU those are:

- UPX
- AHPack
- MEW
- Basic RunPE
- Test

Test folder is where I save some code tests for testing ANBU, so for example you can find here the test for timing hooks.






[1]: <https://software.intel.com/en-us/articles/pin-a-binary-instrumentation-tool-downloads> "Intel PIN download link"
