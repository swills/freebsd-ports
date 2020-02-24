# $FreeBSD$

PORTNAME=	yadifa
DISTVERSION=	2.3.9
DISTVERSIONSUFFIX=	-8497
PORTREVISION=	1
CATEGORIES=	dns
MASTER_SITES=	http://cdn.yadifa.eu/sites/default/files/releases/ \
		https://dns.company/downloads/yadifa/

MAINTAINER=	freebsd@dns.company
COMMENT=	Authoritative nameserver with DNSSEC capabilities

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=	libtool ssl

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--localstatedir=/var

OPTIONS_DEFINE=	CTRL DDNS DOCS EXAMPLES LARGEFILE MASTER TCL RRL MESSAGES NSID
OPTIONS_DEFAULT=	RRL NSID
OPTIONS_SUB=	yes

CTRL_DESC=	Remote control
DDNS_DESC=	Dynamic DNS support (DDNS)
LARGEFILE_DESC=	Support for largefiles
MASTER_DESC=	Use as primary nameserver
MESSAGES_DESC=	Use messages instead of send (if many ip aliases)
NSID_DESC=	Name Server Identifier Option
RRL_DESC=	Response Rate Limiting

CTRL_CONFIGURE_ENABLE=		ctrl
CTRL_CONFIGURE_DISABLE_OFF=	ctrl
DDNS_CONFIGURE_ENABLE=		dynupdate
DDNS_CONFIGURE_DISABLE_OFF=	dynupdate
DDNS_PLIST_FILES=		include/dnsdb/dynupdate-diff.h \
				include/dnsdb/dynupdate.h
LARGEFILE_CONFIGURE_ENABLE=	largefile
LARGEFILE_CONFIGURE_DISABLE_OFF=largefile
MASTER_CONFIGURE_ENABLE=	master
MASTER_CONFIGURE_DISABLE_OFF=	master
MESSAGES_CONFIGURE_ENABLE=	messages
MESSAGES_CONFIGURE_DISABLE_OFF=	messages
NSID_CONFIGURE_ENABLE=		nsid
NSID_CONFIGURE_DISABLE_OFF=	nsid
TCL_USES=			tcl
TCL_CONFIGURE_ENABLE=		tcl
RRL_CONFIGURE_ENABLE=		rrl
RRL_CONFIGURE_DISABLE_OFF=	rrl



USE_RC_SUBR=	${PORTNAME}d

PORTDOCS=	AUTHORS COPYING ChangeLog \
		INSTALL NEWS README TODO VERSION

post-configure:
	${REINPLACE_CMD} -e 's|^docdir = .*|docdir = ${EXAMPLESDIR}|' ${WRKSRC}/etc/Makefile
	${REINPLACE_CMD} -e 's|/usr/local/var|/var|' -e 's|/var/zones|/var/${PORTNAME}|' ${WRKSRC}/etc/yadifad.conf.example

pre-build:
	cd ${WRKSRC} && ${MAKE_CMD} features

post-install:
	${CP} ${WRKSRC}/etc/yadifad.conf \
		${STAGEDIR}${PREFIX}/etc/yadifad.conf.sample
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}
	${MV} ${STAGEDIR}/var/zones ${STAGEDIR}/var/${PORTNAME}

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d/
.for f in yadifa yadifad
	${LN} -s ../../${EXAMPLESDIR_REL}/$f.bash_completion \
		${STAGEDIR}${PREFIX}/etc/bash_completion.d/$f.sh
.endfor

.include <bsd.port.mk>
