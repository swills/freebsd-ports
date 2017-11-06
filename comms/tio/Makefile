# Created by: Dmitri Goutnik <dg@syrec.org>
# $FreeBSD: head/comms/tio/Makefile 452990 2017-10-27 15:31:57Z tobik $

PORTNAME=	tio
DISTVERSIONPREFIX=	v
DISTVERSION=	1.25
CATEGORIES=	comms

MAINTAINER=	dg@syrec.org
COMMENT=	Simple TTY terminal I/O application

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf
GNU_CONFIGURE=	yes
USE_GITHUB=	yes

OPTIONS_DEFINE=	BASH
OPTIONS_DEFAULT=	BASH
OPTIONS_SUB=	yes

BASH_CONFIGURE_WITH=	bash-completion-dir

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
