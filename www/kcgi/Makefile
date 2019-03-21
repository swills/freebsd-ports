# $FreeBSD: head/www/kcgi/Makefile 496319 2019-03-20 08:52:34Z bapt $

PORTNAME=	kcgi
PORTVERSION=	0.10.10
PORTREVISION=	1
CATEGORIES=	www devel
MASTER_SITES=	http://kristaps.bsd.lv/kcgi/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Minimal sandboxed CGI library in C

LICENSE=	ISCL

USES=		tar:tgz

OPTIONS_DEFINE=	EXAMPLES

HAS_CONFIGURE=	yes
MAKE_ARGS=	DATADIR=${EXAMPLESDIR}
USE_RC_SUBR=	kfcgi

post-patch:
	@${REINPLACE_CMD} -e "s/install -m 0555/${INSTALL_PROGRAM}/" \
		${WRKSRC}/Makefile

.include <bsd.port.mk>
