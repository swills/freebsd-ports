# $FreeBSD: head/editors/web-mode/Makefile 449697 2017-09-12 15:38:56Z ashish $

PORTNAME=	web-mode
PORTVERSION=	14
PORTREVISION=	2
DISTVERSIONPREFIX=	v
CATEGORIES=	editors elisp
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Autonomous Emacs major-mode for editing web templates

LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	fxbois
USE_EMACS=	yes
MAKEFILE=	${FILESDIR}/Makefile
MAKE_ENV=	EMACS="${EMACS_CMD}" LISPDIR="${WEBMODE_LISPDIR}" \
		DESTDIR="${STAGEDIR}"
SUB_FILES=	web-mode-autoloads.el
SUB_LIST=	LISPDIR="${WEBMODE_LISPDIR}"
WEBMODE_LISPDIR=	${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}/web-mode
PLIST_FILES=	%%EMACS_VERSION_SITE_LISPDIR%%/web-mode/web-mode.elc.gz \
		%%EMACS_VERSION_SITE_LISPDIR%%/web-mode-autoloads.el

post-install:
	${INSTALL_DATA} ${WRKDIR}/web-mode-autoloads.el \
	    ${STAGEDIR}${PREFIX}/${EMACS_VERSION_SITE_LISPDIR}

.include <bsd.port.mk>
