# $FreeBSD: head/misc/py-tqdm/Makefile 490063 2019-01-12 16:36:16Z sunpoet $

PORTNAME=	tqdm
DISTVERSION=	4.29.1
CATEGORIES=	misc
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	neel@neelc.org
COMMENT=	Fast, extensible progress bar for Python

LICENSE=	MIT MPL20
LICENSE_COMB=	multi
LICENSE_FILE_MIT=	${WRKSRC}/LICENCE

USES=		python
USE_PYTHON=	distutils autoplist concurrent

NO_ARCH=	yes

.include <bsd.port.mk>
