# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: head/lang/p5-Tcl/Makefile 476448 2018-08-05 19:08:13Z sunpoet $

PORTNAME=	Tcl
PORTVERSION=	1.25
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tcl extension module for Perl5

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

PORTSCOUT=	limit:^[0-9\.]*$$

CONFIGURE_ARGS=	--nousestubs --tclsh ${TCLSH}
USES=		perl5 tcl
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Tcl/Tcl.so

.include <bsd.port.mk>
