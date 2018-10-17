# Created by: Christopher Elkins <chrise@scardini.com>
# $FreeBSD$

PORTNAME=	nickle
PORTVERSION=	2.82
CATEGORIES=	lang
MASTER_SITES=	http://www.nickle.org/release/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Numeric-oriented programming language

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake ncurses readline

GNU_CONFIGURE=	yes
EXAMPLES=	*.5c smlng/* turtle/*

# Nickle now has bindings which are likely to pull in libraries that need
# libpthread.  Link to it now explicitly, or it wouldn't work at runtime.
LDFLAGS+=	-pthread

OPTIONS_DEFINE=	EXAMPLES

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|examples|| ; s| -O2||' \
		${WRKSRC}/Makefile.in

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${FIND} ${WRKSRC}/examples -name 'Makefile*' -exec ${RM} {} +
	${INSTALL_DATA} ${EXAMPLES:S|^|${WRKSRC}/examples/|} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
