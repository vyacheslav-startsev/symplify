<?php

declare(strict_types=1);

namespace Symplify\CodingStandard\Tests\Rules\NoProtectedElementInFinalClassRule\Fixture;

final class SomeFinalClassWithProtectedPropertyAndProtectedMethod
{
    protected $x = [];

    protected function run()
    {
    }
}
