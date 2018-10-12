<?php declare(strict_types=1);

namespace Symplify\EasyCodingStandard\Error;

use function Safe\ksort;
use function Safe\usort;

final class ErrorSorter
{
    /**
     * @param Error[][] $errorMessages
     * @return Error[][]
     */
    public function sortByFileAndLine(array $errorMessages): array
    {
        ksort($errorMessages);

        foreach ($errorMessages as $file => $errorMessagesForFile) {
            usort($errorMessagesForFile, function (Error $first, Error $second): int {
                return $second->getLine() <=> $first->getLine();
            });

            $errorMessages[$file] = $errorMessagesForFile;
        }

        return $errorMessages;
    }
}
