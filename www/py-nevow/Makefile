# Created by: Choe, Cheng-Dae
# $FreeBSD: head/www/py-nevow/Makefile 419494 2016-08-02 21:24:37Z pi $

PORTNAME=	nevow
PORTVERSION=	0.14.0
CATEGORIES=	www python devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Nevow-${PORTVERSION}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Web application templating system, based on the Twisted Woven

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_PYTHON=	autoplist distutils
USES=		gettext python twisted:web
NO_ARCH=	yes

SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKSRC}/pkg-message

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
