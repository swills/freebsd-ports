# $FreeBSD: head/net-mgmt/check_logfiles/Makefile 413869 2016-04-23 13:00:22Z flo $

PORTNAME=	check_logfiles
PORTVERSION=	3.7.4.1
CATEGORIES=	net-mgmt
MASTER_SITES=	https://labs.consol.de/assets/downloads/nagios/

MAINTAINER=	flo@FreeBSD.org
COMMENT=	Nagios plugin which scans log files for specific patterns

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PLIST_FILES=	libexec/nagios/check_logfiles

USES=		autoreconf gmake perl5
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-trusted-path=/bin:/sbin:/usr/bin:/usr/sbin:${LOCALBASE}/bin:${LOCALBASE}/sbin \
			--libexecdir=${PREFIX}/libexec/nagios \

.include <bsd.port.mk>
