# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/devel/pychecker/Makefile 454940 2017-11-27 09:00:21Z amdmi3 $

PORTNAME=	pychecker
PORTVERSION=	0.8.19
CATEGORIES=	devel python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python source code checking tool to help hunting common bugs

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

PORTDOCS=	ChangeLog KNOWN_BUGS MAINTAINERS README TODO VERSION

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
