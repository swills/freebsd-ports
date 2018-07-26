# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-Sys-Syscall/Makefile 475097 2018-07-22 09:07:48Z amdmi3 $

PORTNAME=	Sys-Syscall
PORTVERSION=	0.25
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Access system calls that Perl doesn't provide access to

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	@${RM} ${WRKSRC}/lib/Sys/Syscall.pm.orig

.include <bsd.port.mk>
