# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/devel/pychecker/Makefile 432169 2017-01-22 22:27:54Z rene $

PORTNAME=	pychecker
PORTVERSION=	0.8.19
CATEGORIES=	devel python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python source code checking tool to help hunting common bugs

LICENSE=	BSD3CLAUSE

USES=		python
USE_PYTHON=	autoplist distutils

DOCS=		ChangeLog COPYRIGHT KNOWN_BUGS MAINTAINERS README TODO VERSION

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
