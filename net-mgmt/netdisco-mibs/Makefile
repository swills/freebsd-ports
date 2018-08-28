# Created by: Geoffroy Desvernay <dgeo@centrale-marseille.fr>
# $FreeBSD$

PORTNAME=	netdisco-mibs
DISTVERSION=	4.010
CATEGORIES=	net-mgmt

MAINTAINER=	dgeo@centrale-marseille.fr
COMMENT=	Mibs for use with ports-mgmt/netdisco (and snmp)

USE_GITHUB=	yes
GH_ACCOUNT=	netdisco
#GH_PROJECT=	netdisco-mibs

NO_BUILD=	yes
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|\/usr\/local\/netdisco\/mibs|\/usr\/local\/share\/netdisko-mibs|g' ${WRKSRC}/EXTRAS/contrib/snmp.conf
	@${REINPLACE_CMD} -e 's|\/usr\/bin\/perl|\/usr\/local\/bin\/perl|' ${WRKSRC}/EXTRAS/scripts/*/*

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})
	${RM} ${STAGEDIR}${DATADIR}/robots.txt

.include <bsd.port.mk>
