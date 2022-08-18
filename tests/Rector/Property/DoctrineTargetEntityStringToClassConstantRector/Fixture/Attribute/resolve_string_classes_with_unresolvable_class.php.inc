<?php

namespace Rector\Doctrine\Tests\Rector\Property\DoctrineTargetEntityStringToClassConstantRector\Fixture\Attribute;

use Doctrine\Common\Collections\Collection;
use Doctrine\ORM\Mapping as ORM;

final class MyEntity
{
    #[ORM\ManyToOne(targetEntity: "UnresolvableClass")]
    private readonly ?Collection $items;
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Rector\Property\DoctrineTargetEntityStringToClassConstantRector\Fixture\Attribute;

use Doctrine\Common\Collections\Collection;
use Doctrine\ORM\Mapping as ORM;

final class MyEntity
{
    #[ORM\ManyToOne(targetEntity: "UnresolvableClass")]
    private readonly ?Collection $items;
}

?>