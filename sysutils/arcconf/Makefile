# Created by: michael@fuckner.net
# $FreeBSD$

PORTNAME=	arcconf
DISTVERSION=	2_03_22476
PORTEPOCH=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://download.adaptec.com/raid/storage_manager/
DISTNAME=	arcconf_v${DISTVERSION}

MAINTAINER=	michael@fuckner.net
COMMENT=	Adaptec SCSI/SAS RAID administration tool

RUN_DEPENDS=	${LOCALBASE}/lib/compat/libstdc++.so.6:misc/compat9x

ONLY_FOR_ARCHS=	amd64

USES=		zip

PERIODICSCRIPT=	410.status-aac-raid

SUB_FILES+=	${PERIODICSCRIPT}

RESTRICTED=	May not be redistributed in binary form
NO_CDROM=	May not be redistributed in binary form

NO_BUILD=	yes
NO_WRKSUBDIR=	yes
PLIST_FILES=	etc/periodic/daily/410.status-aac-raid \
		sbin/arcconf

.include <bsd.port.pre.mk>

.if ${OPSYS} != FreeBSD || ${OSVERSION} >= 1100000
IGNORE=		installs incompatible binaries for FreeBSD
.else
DIST_EXT=	_x64
DIST_OSVER=	10
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/freebsd${DIST_OSVER}${DIST_EXT}/cmdline/arcconf ${STAGEDIR}${PREFIX}/sbin
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/periodic/daily
	${INSTALL_SCRIPT} ${WRKDIR}/${PERIODICSCRIPT} ${STAGEDIR}${PREFIX}/etc/periodic/daily

.include <bsd.port.post.mk>
