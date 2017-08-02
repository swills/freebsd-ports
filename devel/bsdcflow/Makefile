# $FreeBSD: head/devel/bsdcflow/Makefile 446721 2017-07-27 09:01:07Z amdmi3 $

PORTNAME=	bsdcflow
PORTVERSION=	0.0.6
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://cdn.bitbucket.org/marcusva/cflow/downloads/
DISTNAME=	cflow-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Call graph generator for C and assembler code

LICENSE=	BSD2CLAUSE

CONFLICTS=	gnucflow-[0-9]* cflow-[0-9]*

USES=		gmake
MAKE_ENV=	MANDIR=${PREFIX}/man
MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/asmgraph bin/cgraph	bin/cflow \
		man/man1/asmgraph.1.gz man/man1/cflow.1.gz \
		man/man1/cgraph.1.gz

WRKSRC=		${WRKDIR}/${DISTNAME}/gnu

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/cgraph
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/asmgraph

.include <bsd.port.mk>
