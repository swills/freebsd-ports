# Created by: Kay Lehmann
# $FreeBSD: head/sysutils/cdbkup/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	cdbkup
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/release-1-0
DISTNAME=	${PORTNAME}_${PORTVERSION}-1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple but full-featured backup/restore perl scripts (uses gnu tar)

BUILD_DEPENDS=	${LOCALBASE}/sbin/eject:sysutils/eject \
		cdrecord:sysutils/cdrtools
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

GNU_CONFIGURE=	yes
USES=		perl5
CONFIGURE_ENV+=	PATH=${PATH}:${LOCALBASE}/sbin

PORTDOCS=	README TODO COMPLIANCE

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
