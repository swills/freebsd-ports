# $FreeBSD: head/www/kcgi/Makefile 442900 2017-06-08 01:46:33Z bapt $

PORTNAME=	kcgi
PORTVERSION=	0.9.5
CATEGORIES=	www devel
MASTER_SITES=	http://kristaps.bsd.lv/kcgi/snapshots/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Minimal sandboxed CGI library in C

LICENSE=	ISCL

USES=		tar:tgz gmake

OPTIONS_DEFINE=	EXAMPLES

HAS_CONFIGURE=	yes
MAKE_ARGS=	DATADIR=${EXAMPLESDIR}
MAKEFILE=	GNUmakefile

post-patch:
	@${REINPLACE_CMD} -e "s/install -m 0555/${INSTALL_PROGRAM}/" \
		${WRKSRC}/GNUmakefile

.include <bsd.port.mk>
