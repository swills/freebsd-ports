# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-Inline-Tcl/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Inline-Tcl
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5 tcl
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Write Perl subroutines in Tcl

LICENSE=	ARTPERL10

BUILD_DEPENDS=	p5-Inline>=0:devel/p5-Inline
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 tcl
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${TCL_INCLUDEDIR}" \
		LIBS="-L${TCL_LIBDIR} -Wl,-rpath,${TCL_LIBDIR} -ltcl${TCL_SHLIB_VER}"

post-patch:
	@${REINPLACE_CMD} '2,99d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
