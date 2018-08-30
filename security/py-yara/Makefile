# $FreeBSD: head/security/py-yara/Makefile 477423 2018-08-17 13:07:56Z antoine $

PORTNAME=	yara
PORTVERSION=	3.8.1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-python-${PORTVERSION}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Python bindings for yara

LICENSE=	APACHE20

LIB_DEPENDS=	libyara.so:security/yara

USES=		localbase python
USE_PYTHON=	distutils autoplist
PYDISTUTILS_BUILDARGS=	--dynamic-linking

.include <bsd.port.mk>
