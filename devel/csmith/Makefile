# $FreeBSD: head/devel/csmith/Makefile 482810 2018-10-23 06:36:00Z linimon $

PORTNAME=	csmith
PORTVERSION=	2.3.0
CATEGORIES=	devel
MASTER_SITES=	http://embed.cs.utah.edu/csmith/

MAINTAINER=	mmokhi@FreeBSD.org
COMMENT=	Generates random C programs that conform to the C99 standard

LICENSE=	BSD2CLAUSE

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--docdir=${DOCSDIR}
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip
USES=		gmake libtool perl5 shebangfix
USE_PERL5=	run
SHEBANG_FILES=	scripts/compiler_test.pl scripts/launchn.pl
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

PLIST_SUB=	PKGNAME="${PKGNAME}"

.include <bsd.port.mk>
