# Created by: Choe, Cheng-Dae
# $FreeBSD: head/www/py-nevow/Makefile 449232 2017-09-04 00:01:26Z sunpoet $

PORTNAME=	nevow
PORTVERSION=	0.14.0
PORTREVISION=	1
CATEGORIES=	www python devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Nevow-${PORTVERSION}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Web application templating system, based on the Twisted Woven

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}twisted>=0:devel/py-twisted

USE_PYTHON=	autoplist distutils
USES=		gettext python
NO_ARCH=	yes

SUB_FILES=	pkg-message
PKGMESSAGE=	${WRKSRC}/pkg-message

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
