# Created by: Stanislav Sedov <ssedov@mbsd.msk.ru>
# $FreeBSD: head/devel/ocaml-camomile-examples/Makefile 425174 2016-11-02 22:45:14Z mat $

PORTNAME=	camomile
PORTVERSION=	0.4.1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/OldFiles
PKGNAMEPREFIX=	ocaml-
PKGNAMESUFFIX=	-examples
DISTNAME=	examples-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Example programs for Camomile library

WRKSRC=		${WRKDIR}/examples
NO_BUILD=	yes
USES=	tar:bzip2
EXAMPLESDIR=	${PREFIX}/share/examples/ocaml/${PORTNAME}

do-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
