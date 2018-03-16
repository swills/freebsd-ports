# Created by: MANTANI Nobutaka <nobutaka@FreeBSD.org>
# $FreeBSD: head/japanese/jmode-skk/Makefile 463974 2018-03-09 16:44:35Z linimon $

PKGNAMESUFFIX=	-skk

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	XIM server for SKK input method

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

MASTERDIR=	${.CURDIR}/../../japanese/jmode
DESCR=		${.CURDIR}/pkg-descr

.if defined(WITH_DBSKKD) || exists(${LOCALBASE}/libexec/dbskkd-cdb)
RUN_DEPENDS=	${LOCALBASE}/libexec/dbskkd-cdb:japanese/dbskkd-cdb
.else
RUN_DEPENDS=	${LOCALBASE}/sbin/skkserv:japanese/skkserv
.endif

CONFIGURE_ARGS=	--with-skk

.include "${MASTERDIR}/Makefile"
