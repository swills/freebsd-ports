# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/databases/nagios-check_redis/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	check_redis
PORTVERSION=	0.1
CATEGORIES=	databases perl5
MASTER_SITES=	#
PKGNAMEPREFIX=	nagios-
DISTFILES=	# none

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Nagios plugin to check redis server

RUN_DEPENDS=	${LOCALBASE}/libexec/nagios/utils.pm:net-mgmt/nagios-plugins \
		p5-Redis>=0:databases/p5-Redis \
		p5-Net-SNMP>=0:net-mgmt/p5-Net-SNMP

USES=		perl5
USE_PERL5=	run
NO_BUILD=	yes
PLIST_FILES=	libexec/nagios/check_redis

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${FILESDIR}/check_redis ${STAGEDIR}${PREFIX}/libexec/nagios/

.include <bsd.port.mk>
