# Created by: antoine@FreeBSD.org
# $FreeBSD: head/devel/py-pyelftools/Makefile 475515 2018-07-28 09:42:00Z antoine $

PORTNAME=	pyelftools
PORTVERSION=	0.24
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Library for analyzing ELF files and DWARF debugging information

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist concurrent

PORTEXAMPLES=	*

OPTIONS_DEFINE=	EXAMPLES

do-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
