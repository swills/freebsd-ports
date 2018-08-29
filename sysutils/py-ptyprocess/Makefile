# $FreeBSD$

PORTNAME=	ptyprocess
PORTVERSION=	0.6.0
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	robak@FreeBSD.org
COMMENT=	Run a subprocess in a pseudo terminal

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest>0:devel/py-pytest@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

do-test:
	(cd ${WRKSRC} && ${PYTHON_CMD} -m pytest)

.include <bsd.port.mk>
