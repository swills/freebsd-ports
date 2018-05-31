# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: head/textproc/doc-mode.el/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	doc-mode.el
PORTVERSION=	1.1
PORTREVISION=	16
CATEGORIES=	textproc elisp
MASTER_SITES=	SF/xpt/doc-mode/doc-mode-${PORTVERSION}
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}
DISTNAME=	doc-mode-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Asciidoc fontlocking for emacs

USES=		emacs tar:tgz

NO_BUILD=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/doc-mode.el ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}/doc-mode.el

.include <bsd.port.mk>
