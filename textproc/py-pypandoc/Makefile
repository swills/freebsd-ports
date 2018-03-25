# $FreeBSD: head/textproc/py-pypandoc/Makefile 464839 2018-03-17 18:26:04Z yuri $

PORTNAME=	pypandoc
DISTVERSION=	1.4
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Thin wrapper for pandoc

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	pandoc:textproc/hs-pandoc

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
