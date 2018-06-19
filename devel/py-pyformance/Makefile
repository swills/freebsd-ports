# Created by: Waitman Gobble <waitman@waitman.net>
# $FreeBSD: head/devel/py-pyformance/Makefile 471082 2018-05-29 07:23:32Z krion $

PORTNAME=	pyformance
PORTVERSION=	0.4
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	waitman@waitman.net
COMMENT=	Toolset for performance measurement and statistics

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>=1.11.0:devel/py-six@${FLAVOR}

OPTIONS_DEFINE=	DOCS

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist concurrent distutils

PORTDOCS=	README.md

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
