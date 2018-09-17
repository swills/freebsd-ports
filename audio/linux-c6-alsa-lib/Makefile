# Created by: Artyom Mirgorodskiy <artyom.mirgorodsky@gmail.com>
# $FreeBSD: head/audio/linux-c6-alsa-lib/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	alsa-lib
PORTVERSION=	1.1.0
PORTREVISION=	3
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Advanced Linux Sound Architecture libraries (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	GPLv3

RUN_DEPENDS=	alsa-lib>0:audio/alsa-lib

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	4.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

post-patch:
	@${RM} -r ${WRKSRC}/etc/* ${WRKSRC}/usr/lib/alsa-lib/smixer/*.la \
		${WRKSRC}/usr/lib64/alsa-lib/smixer/*.la

post-install:
	${LN} -sf ${LOCALBASE}/etc/asound.conf ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
