# $FreeBSD: head/misc/py-tqdm/Makefile 468590 2018-04-28 20:11:17Z sunpoet $

PORTNAME=	tqdm
DISTVERSIONPREFIX=	v
DISTVERSION=	4.23.1
CATEGORIES=	misc
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	neel@neelc.org
COMMENT=	Fast, extensible progress bar for Python

LICENSE=	MIT MPL20
LICENSE_COMB=	multi
LICENSE_FILE_MIT=	${WRKSRC}/LICENCE

USES=		python
USE_GITHUB=	yes
USE_PYTHON=	distutils autoplist concurrent
NO_ARCH=	yes

.include <bsd.port.mk>
