# $FreeBSD: head/security/py-yara/Makefile 476939 2018-08-11 18:19:11Z antoine $

PORTNAME=	yara
PORTVERSION=	3.8.0
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
