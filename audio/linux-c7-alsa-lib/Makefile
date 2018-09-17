# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/audio/linux-c7-alsa-lib/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	alsa-lib
PORTVERSION=	1.1.3
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Advanced Linux Sound Architecture libraries (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	GPLv3

RUN_DEPENDS=	alsa-lib>0:audio/alsa-lib

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

RPMVERSION=	3.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

post-patch:
	@${RM} -r ${WRKSRC}/etc/* ${WRKSRC}/lib/modprobe.d \
		${WRKSRC}/usr/share/doc/alsa-lib

post-install:
	${LN} -sf ${LOCALBASE}/etc/asound.conf ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
