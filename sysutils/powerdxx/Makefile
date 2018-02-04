# $FreeBSD: head/sysutils/powerdxx/Makefile 460769 2018-02-03 03:54:16Z swills $

PORTNAME=	powerdxx
DISTVERSION=	0.3.0
CATEGORIES=	sysutils

MAINTAINER=	lbdm@privacychain.ch
COMMENT=	CPU clock speed/frequency daemon

LICENSE=	ISCL

USES=		compiler:c++14-lang
USE_GITHUB=	yes
GH_ACCOUNT=	lonkamikaze
GH_TUPLE=	lonkamikaze:powerdxx:6845b0e:powerdxx/gh-pages

USE_LDCONFIG=	yes
MAKE_ARGS=	DOCSDIR="${DOCSDIR}"

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/gh-pages/refman.pdf ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
