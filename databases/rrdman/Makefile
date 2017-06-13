# Created by: Janos Mohacsi <janos.mohacsi@bsd.hu>
# $FreeBSD: head/databases/rrdman/Makefile 414458 2016-05-02 16:08:56Z zeising $

PORTNAME=	rrdman
PORTVERSION=	1.0.1
PORTREVISION=	5
CATEGORIES=	databases
MASTER_SITES=	SF/rrfw/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Apply Holt-Winters prediction parameters to RRD data

BUILD_DEPENDS=	rrdtool:databases/rrdtool
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	YES
USES=		perl5
PLIST_FILES=	bin/rrd_hwreapply man/man1/rrd_hwreapply.1.gz

.include <bsd.port.mk>
