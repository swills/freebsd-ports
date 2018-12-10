# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/devel/py-py_interface/Makefile 486792 2018-12-06 20:32:16Z sunpoet $

PORTNAME=	py_interface
PORTVERSION=	2.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python implementation of an Erlang node

LICENSE=	LGPL20

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	README

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
