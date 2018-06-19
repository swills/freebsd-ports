# $FreeBSD: head/misc/py-serverfiles/Makefile 472171 2018-06-11 08:28:13Z yuri $

PORTNAME=	serverfiles
DISTVERSION=	0.2.1
CATEGORIES=	misc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Access files on a HTTP server and store them locally for reuse

LICENSE=	GPLv3+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.11.1:www/py-requests@${FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
