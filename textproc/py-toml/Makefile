# Created by: Waitman Gobble <waitman@waitman.net>
# $FreeBSD: head/textproc/py-toml/Makefile 481577 2018-10-08 21:42:14Z sunpoet $

PORTNAME=	toml
PORTVERSION=	0.10.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Python library for parsing and creating TOML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

OPTIONS_DEFINE=	DOCS

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

PORTDOCS=	README.rst

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.rst ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
