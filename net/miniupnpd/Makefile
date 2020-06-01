# Created by: Daniel O'Connor <darius@dons.net.au>
# $FreeBSD$

PORTNAME=	miniupnpd
PORTVERSION=	2.1.20200510
PORTEPOCH=	1
CATEGORIES=	net
MASTER_SITES=	http://miniupnp.tuxfamily.org/files/ \
		http://miniupnp.free.fr/files/

MAINTAINER=	squat@squat.no
COMMENT=	UPnP IGD implementation which uses pf/ipf

LICENSE=	BSD3CLAUSE

USES=		cpe ssl
HAS_CONFIGURE=  yes
CPE_VENDOR=	miniupnp_project
PLIST_FILES=	etc/miniupnpd.conf.sample sbin/miniupnpd \
		man/man8/miniupnpd.8.gz
MAKE_JOBS_UNSAFE=yes
USE_RC_SUBR=	miniupnpd

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

OPTIONS_DEFINE=	CHECK_PORTINUSE IPV6 UPNP_IGDV2 UPNP_STRICT LEASEFILE
OPTIONS_DEFAULT=	AUTODETECT_FW
OPTIONS_SINGLE=		FIREWALL
OPTIONS_SINGLE_FIREWALL=	AUTODETECT_FW PF IPFW
AUTODETECT_FW_DESC=	Try to autodetect firewall type
PF_DESC=	Use PF as firewall type
IPFW_DESC=	Use IPFW as firewall type
CHECK_PORTINUSE_DESC=	Check if ports are in use
UPNP_IGDV2_DESC=	Build an IGDv2 instead of an IGDv1
UPNP_STRICT_DESC=	More strict UPnP specification compliance
LEASEFILE_DESC=	Enable lease file

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPF}
CONFIGURE_ARGS+=	--firewall=pf
.endif
#if ${PORT_OPTIONS:MIPFW}
#CONFIGURE_ARGS+=	--firewall=ipfw
#.endif
.if ${PORT_OPTIONS:MCHECK_PORTINUSE}
CONFIGURE_ARGS+=	--portinuse
.endif
.if ${PORT_OPTIONS:MIPV6}
CONFIGURE_ARGS+=	--ipv6
.endif
.if ${PORT_OPTIONS:MUPNP_IGDV2}
CONFIGURE_ARGS+=	--igd2
.endif
.if ${PORT_OPTIONS:MUPNP_STRICT}
CONFIGURE_ARGS+=	--strict
.endif
.if ${PORT_OPTIONS:MLEASEFILE}
CONFIGURE_ARGS+=	--leasefile
.endif

post-patch:
	${REINPLACE_CMD} -e 's|\(-lssl -lcrypto\)|$$(LDFLAGS) \1|g' \
	${WRKSRC}/Makefile.bsd
	
.include <bsd.port.mk>
