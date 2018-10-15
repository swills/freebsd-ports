# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-File-Pid/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	File-Pid
PORTVERSION=	1.01
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Pid File Manipulation

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

post-patch:
	@${RM} ${WRKSRC}/lib/File/Pid.pm.orig

.include <bsd.port.mk>
