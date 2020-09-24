# $FreeBSD$

PORTNAME=	scamper
DISTVERSION=	20200923
CATEGORIES=	net
MASTER_SITES=	https://www.caida.org/tools/measurement/scamper/code/
DISTNAME=	${PORTNAME}-cvs-${PORTVERSION}

MAINTAINER=	mjl@luckie.org.nz
COMMENT=	Tool for parallelised IPv4 and IPv6 measurement

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake libtool ssl
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	HOIHO UPTIME
OPTIONS_SUB=	yes

HOIHO_DESC=	Install sc_hoiho
HOIHO_CONFIGURE_WITH=	sc_hoiho pcre2
HOIHO_LIB_DEPENDS=	libpcre2-8.so:devel/pcre2
UPTIME_DESC=	Install sc_uptime
UPTIME_CONFIGURE_WITH=	sc_uptime
UPTIME_LIB_DEPENDS=	libsqlite3.so:databases/sqlite3

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MHOIHO}  || ${PORT_OPTIONS:MUPTIME}
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
.endif

.include <bsd.port.mk>
