# Created by: Geoffroy Desvernay <dgeo@centrale-marseille.fr>
# $FreeBSD: head/net-mgmt/netdisco-mibs/Makefile 478358 2018-08-29 15:05:02Z swills $

PORTNAME=	netdisco-mibs
DISTVERSION=	4.010
CATEGORIES=	net-mgmt

MAINTAINER=	dgeo@centrale-marseille.fr
COMMENT=	MIBs for use with ports-mgmt/netdisco (and SNMP)

USE_GITHUB=	yes
GH_ACCOUNT=	netdisco

NO_BUILD=	yes
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local/netdisco/mibs|${LOCALBASE}/share/netdisko-mibs|g' ${WRKSRC}/EXTRAS/contrib/snmp.conf
	@${REINPLACE_CMD} -e 's|/usr/bin/perl|${LOCALBASE}/bin/perl|' ${WRKSRC}/EXTRAS/scripts/*/*

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})
	${RM} ${STAGEDIR}${DATADIR}/robots.txt

.include <bsd.port.mk>
