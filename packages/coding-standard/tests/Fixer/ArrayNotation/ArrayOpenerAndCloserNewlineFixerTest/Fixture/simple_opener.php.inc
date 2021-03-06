<?php

namespace Symplify\CodingStandard\Tests\Fixer\ArrayNotation\ArrayOpenerAndCloserNewlineFixerTest\Fixture;

final class SimpleOpener
{
    public function run()
    {
        $value = [
            RenameMethodRector::OLD_TO_NEW_METHODS_BY_CLASS => inline_objects(
                [new MethodCallRename('Cake\Form\Form', 'errors', 'getErrors'),
                    new MethodCallRename('Cake\Mailer\Email', 'set', 'setViewVars'),
                ]
            )
        ];
    }
}

?>
-----
<?php

namespace Symplify\CodingStandard\Tests\Fixer\ArrayNotation\ArrayOpenerAndCloserNewlineFixerTest\Fixture;

final class SimpleOpener
{
    public function run()
    {
        $value = [
            RenameMethodRector::OLD_TO_NEW_METHODS_BY_CLASS => inline_objects(
                [
new MethodCallRename('Cake\Form\Form', 'errors', 'getErrors'),
                    new MethodCallRename('Cake\Mailer\Email', 'set', 'setViewVars'),
                ]
            )
        ];
    }
}

?>
