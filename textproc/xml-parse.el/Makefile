# Created by: Dryice Liu <dryice@liu.com.cn>
# $FreeBSD: head/textproc/xml-parse.el/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	xml-parse.el
PORTVERSION=	1.5
PORTREVISION=	9
CATEGORIES=	textproc elisp
MASTER_SITES=	http://dryice.name/computer/FreeBSD/distfiles/ \
		http://sacha.free.net.ph/notebook/emacs/ \
		http://ports.toco-domains.de/
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=
EXTRACT_ONLY=

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Code to efficiently read/write XML data with Elisp

USES=		emacs

NO_BUILD=	yes

do-install:
	${INSTALL_DATA} ${DISTDIR}/${DISTNAME} ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
