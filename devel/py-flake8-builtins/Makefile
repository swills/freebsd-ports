# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-flake8-builtins/Makefile 465108 2018-03-20 19:23:32Z amdmi3 $

PORTNAME=	flake8-builtins
PORTVERSION=	1.1.1
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Check for python builtins being used as variables or parameters

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flake8>=0:devel/py-flake8@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
