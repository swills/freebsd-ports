# Created by: KIMURA Yasuhiro <yasu@utahime.org>
# $FreeBSD: head/textproc/yaml-mode.el/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	yaml-mode.el
PORTVERSION=	0.0.13
DISTVERSIONPREFIX=	v
PORTREVISION=	4
CATEGORIES=	textproc elisp
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	yasu@utahime.org
COMMENT=	Simple major mode to edit YAML file for Emacsen

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		emacs
USE_GITHUB=	yes
GH_ACCOUNT=	yoshiki
GH_PROJECT=	yaml-mode

MAKE_ENV=	LISPDIR=${LISPDIR}

LISPDIR=	${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}

OPTIONS_DEFINE=	DOCS

pre-install:
	@${MKDIR} ${LISPDIR}

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in Changes README
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
